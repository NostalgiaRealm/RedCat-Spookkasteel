/*
 * FUN_004749b0 at 004749b0
 * undefined FUN_004749b0(void)
 * Address ranges: 004749b0-00474a18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004749b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14888);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      iVar2 = param_1 + 0x11c;
      goto LAB_004749ec;
    }
    if (iVar2 == 2) {
      iVar2 = param_1 + 0x120;
      goto LAB_004749ec;
    }
  }
  iVar2 = param_1 + 0x118;
LAB_004749ec:
  cVar1 = FUN_00474910(param_3,iVar2);
  if ((cVar1 != '\0') &&
     (iVar2 = *(int *)(param_1 + 0x14888) + 1, *(int *)(param_1 + 0x14888) = iVar2, 2 < iVar2)) {
    *(undefined4 *)(param_1 + 0x14888) = 0;
  }
  return;
}

