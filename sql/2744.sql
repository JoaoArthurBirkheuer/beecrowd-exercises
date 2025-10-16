SELECT
    id,
    password AS "password",
    MD5(password) AS "MD5"
FROM
    account;