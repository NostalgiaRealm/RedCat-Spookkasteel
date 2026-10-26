/*
 * FUN_00554630 at 00554630
 * undefined FUN_00554630(void)
 * Address ranges: 00554630-00554652
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00554630(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

