/*
 * FUN_005fed82 at 005fed82
 * undefined FUN_005fed82(void)
 * Address ranges: 005fed82-005fee02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005fed82(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  undefined4 *puVar3;
  int unaff_EBP;
  int iVar4;
  
  FUN_0060eb4c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_006514c4;
  iVar4 = extraout_ECX[3];
  *(undefined4 *)(unaff_EBP + -4) = 2;
  while (iVar4 != 0) {
    iVar4 = iVar4 + -1;
    uVar1 = *(uint *)(extraout_ECX[2] + iVar4 * 4);
    if (uVar1 != 0) {
      iVar2 = *(int *)(uVar1 + 4);
      if ((iVar2 != 0) && (iVar2 != -1)) {
        *(int *)(uVar1 + 4) = iVar2 + -1;
      }
      puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar1 + 4) != 0) & uVar1);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  FUN_0060b25d(extraout_ECX[2]);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004040a0(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_006514cc;
  return;
}

