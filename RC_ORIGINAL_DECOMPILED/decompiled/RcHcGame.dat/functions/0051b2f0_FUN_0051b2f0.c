/*
 * FUN_0051b2f0 at 0051b2f0
 * undefined FUN_0051b2f0(void)
 * Address ranges: 0051b2f0-0051b344
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_0051b2f0(int param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  int iVar3;
  
  DVar1 = timeGetTime();
  *(DWORD *)(param_1 + 100) = DVar1;
  uVar2 = FUN_00484d70(DVar1,*(undefined4 *)(param_1 + 0x60));
  FUN_00409e30(uVar2);
  FUN_0060b0da();
  iVar3 = __ftol();
  if (iVar3 < 0) {
    return 0;
  }
  if (99 < iVar3) {
    iVar3 = 99;
  }
  return iVar3;
}

