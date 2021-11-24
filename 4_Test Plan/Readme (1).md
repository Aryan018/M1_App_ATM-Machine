# Test Plan

---

## High Level Test Plan

---

| TestID | Description                                                                                                                                  | Exp I/P | Exp O/P                       | Actual O/P                    | Type of Test      |
| ------ | -------------------------------------------------------------------------------------------------------------------------------------------- | ------- | ----------------------------- | ----------------------------- | ----------------- |
| H_01   | Depositing money in the account and checking the total Balance                 | 4000     | 19000                         | 19000                         | Requirement Based |
| H_02   | Customer checking his/her balance                                                                                                        | ----    | SUCCESS                       | SUCCESS                       | Requirement Based |
| H_03   | When user enter the wrong option                                                                                                | ----    | Give message "Invalid number" | Give message "Invalid number" | Scenario Based    |
## Low Level Test Plan

---

| TestID | Description                                                                                 | Exp I/P       | Exp O/P                  | Actual O/P               | Type of Test      |
| ------ | ------------------------------------------------------------------------------------------- | ------------- | ------------------------ | ------------------------ | ----------------- |
| L_01   | Balance left after the customer has withdrawn money from his/her account             |   5000      | 10000                      | 10000                     | Requirement Based |
| L_02   | When the customer transaction has completed                          | ----           | Give messsage "Take your receipt"                    | Give message "Take your receipt                    | Scenario Based |
| L_03   | When the customer starts his/her transaction               | -----       | Give message "Welcome to ATM Banking"                   | Give message "Welcome to ATM Banking"                   | scenario Based |
