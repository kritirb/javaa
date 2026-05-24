
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>CSS Flower</title>
    <style>
        body {
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
            background-color: #f0f8ff;
        }

        .flower {
            position: relative;
            width: 200px;
            height: 200px;
            transform: rotate(45deg);
        }

        /* Petals */
        .petal {
            position: absolute;
            width: 100px;
            height: 100px;
            background-color: #ff6347;
            border-radius: 50%;
            transform: rotate(45deg);
            top: 50%;
            left: 50%;
            margin-left: -50px;
            margin-top: -50px;
        }

        .petal:nth-child(1) {
            transform: rotate(0deg) translateX(60px);
        }

        .petal:nth-child(2) {
            transform: rotate(90deg) translateX(60px);
        }

        .petal:nth-child(3) {
            transform: rotate(180deg) translateX(60px);
        }

        .petal:nth-child(4) {
            transform: rotate(270deg) translateX(60px);
        }

        /* Center of the flower */
        .center {
            position: absolute;
            width: 50px;
            height: 50px;
            background-color: yellow;
            border-radius: 50%;
            top: 50%;
            left: 50%;
            margin-left: -25px;
            margin-top: -25px;
        }
    </style>
</head>
<body>

    <div class="flower">
        <div class="petal"></div>
        <div class="petal"></div>
        <div class="petal"></div>
        <div class="petal"></div>
        <div class="center"></div>
    </div>

</body>
</html>

