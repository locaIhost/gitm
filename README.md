## General Information
The main task after gaining access to an attacked machine is to be persistent. After all, access can be lost due to a reboot of the attacked system, loss of credentials, or blocking of remote access. This scenario uses a bunch of C, systemd and ingenuity.
___
## About
The program inserts the public key into `authorized_keys` and deletes the key if it finds a match. At the moment this scenario conditions the use of a systemd-timer. I originally chose the binary name `php7-session-clean` because in my opinion it integrates inconspicuously into the usual logic when used with the systemd-timer. `Clean PHP session files`.

___
## Runing
1. Edit the `config/const.h` file and change the values to your desired values.
2. Run `make`.
3. Move the binary file to the captured machine.
4. Hide for example in `/bin/` and run the timer.
5. Prepare systemd configuration files to your liking.
6. Profit =)
> You can use your fantasy and change the name of the binary to your taste 🔥
___
## Reservation
1. I don't claim to be a super inventive idea or concept 🐣
2. I understand that any average administrator will be able to detect this anomaly 🧙‍♀️
3. The code was created for academic purposes in learning C 👩‍🎓
4. If you want to help, improve, suggest, correct, do it! 🏁
5. Give me u star for me ⭐
