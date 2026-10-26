/*
 * FUN_005a6440 at 005a6440
 * undefined FUN_005a6440(void)
 * Address ranges: 005a6440-005a6489
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005a6440(UINT *param_1)

{
  UINT uJoyID;
  MMRESULT MVar1;
  
  if (((char)param_1[0xe] != '\0') && (uJoyID = *param_1, -1 < (int)uJoyID)) {
    param_1[2] = 0x83;
    ((LPJOYINFOEX)(param_1 + 1))->dwSize = 0x34;
    MVar1 = joyGetPosEx(uJoyID,(LPJOYINFOEX)(param_1 + 1));
    if (MVar1 != 0) {
      FUN_005a61a0();
      return;
    }
    FUN_005a61f0(param_1[3],param_1[4],param_1[9]);
  }
  return;
}

