/*
 * FUN_00565870 at 00565870
 * undefined FUN_00565870(void)
 * Address ranges: 00565870-005658ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00565870(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    DVar1 = timeGetTime();
    iVar2 = DVar1 - param_1[2];
  }
  else {
    iVar2 = param_1[1];
  }
  if (param_1[3] == -1) {
    param_1[3] = iVar2;
    param_1[4] = iVar2;
  }
  __ftol();
  return;
}

