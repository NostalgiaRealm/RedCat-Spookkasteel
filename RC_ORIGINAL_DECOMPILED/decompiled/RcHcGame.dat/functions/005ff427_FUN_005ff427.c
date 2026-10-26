/*
 * FUN_005ff427 at 005ff427
 * undefined FUN_005ff427(void)
 * Address ranges: 005ff427-005ff4d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005ff427(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 *puVar4;
  int unaff_EBP;
  uint uVar5;
  
  FUN_0060eb4c();
  uVar5 = *(uint *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(uint *)(extraout_ECX + 0xc) <= uVar5) {
    uVar5 = uVar5 + 1;
    if (uVar5 < 0x20) {
      uVar5 = 0x20;
    }
    iVar3 = FUN_0060e293(*(undefined4 *)(extraout_ECX + 8),uVar5 << 2);
    if (iVar3 == 0) {
      FUN_006011d8();
    }
    *(int *)(extraout_ECX + 8) = iVar3;
    while (*(uint *)(extraout_ECX + 0xc) < uVar5) {
      *(undefined4 *)(*(int *)(extraout_ECX + 8) + *(int *)(extraout_ECX + 0xc) * 4) = 0;
      *(int *)(extraout_ECX + 0xc) = *(int *)(extraout_ECX + 0xc) + 1;
    }
    uVar5 = *(uint *)(unaff_EBP + 0xc);
  }
  iVar3 = *(int *)(unaff_EBP + 8);
  if (*(int *)(iVar3 + 4) != -1) {
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
  }
  uVar1 = *(uint *)(*(int *)(extraout_ECX + 8) + uVar5 * 4);
  if (uVar1 != 0) {
    iVar2 = *(int *)(uVar1 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar1 + 4) = iVar2 + -1;
    }
    puVar4 = (undefined4 *)(~-(uint)(*(int *)(uVar1 + 4) != 0) & uVar1);
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(int *)(*(int *)(extraout_ECX + 8) + uVar5 * 4) = iVar3;
  return;
}

