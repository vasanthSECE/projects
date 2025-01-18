<?php
if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    $to = "vasanth37141@gmail.com"; // Your email address
    $name = htmlspecialchars($_POST['name']);
    $email = htmlspecialchars($_POST['email']);
    $message = htmlspecialchars($_POST['message']);
    $subject = "New Message from Portfolio Contact Form";

    // Email Body
    $body = "You have received a new message from your portfolio:\n\n";
    $body .= "Name: $name\n";
    $body .= "Email: $email\n";
    $body .= "Message:\n$message\n";

    // Email Headers
    $headers = "From: $email\r\n";
    $headers .= "Reply-To: $email\r\n";

    // Send Email
    if (mail($to, $subject, $body, $headers)) {
        echo "<script>alert('Thanks for reaching out! I will contact you soon.');</script>";
    } else {
        echo "<script>alert('Failed to send the message. Please try again later.');</script>";
    }
} else {
    echo "<script>alert('Invalid request. Please fill the form correctly.');</script>";
}
?>
