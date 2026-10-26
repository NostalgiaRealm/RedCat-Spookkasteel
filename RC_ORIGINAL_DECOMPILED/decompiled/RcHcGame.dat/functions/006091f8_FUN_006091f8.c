/*
 * FUN_006091f8 at 006091f8
 * undefined FUN_006091f8(void)
 * Address ranges: 006091f8-006092d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_006091f8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int3 iVar6;
  int iVar5;
  
  iVar2 = FUN_0060e6d3();
  *(undefined1 *)(param_1 + 0xc) = **(undefined1 **)(iVar2 + 0x14);
  *(undefined1 *)(param_1 + 0xd) = **(undefined1 **)(iVar2 + 0x18);
  uVar3 = FUN_00600a7c(*(undefined4 *)(iVar2 + 0x1c),0);
  *(undefined4 *)(param_1 + 8) = uVar3;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar3 = *(undefined4 *)(iVar2 + 0x10);
  }
  else {
    uVar3 = *(undefined4 *)(iVar2 + 0xc);
  }
  uVar3 = FUN_00600a7c(uVar3,0);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  if ((*(char *)(iVar2 + 0x2e) < '\0') || ('\x04' < *(char *)(iVar2 + 0x2e))) {
    puVar4 = &DAT_006b3f70;
  }
  else {
    puVar4 = *(undefined1 **)(iVar2 + 0x20);
  }
  uVar3 = FUN_00600a7c(puVar4,0);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  if ((*(char *)(iVar2 + 0x2f) < '\0') || ('\x04' < *(char *)(iVar2 + 0x2f))) {
    puVar4 = &DAT_006a7484;
  }
  else {
    puVar4 = *(undefined1 **)(iVar2 + 0x24);
  }
  uVar3 = FUN_00600a7c(puVar4,0);
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  if (*(char *)(param_1 + 0x28) == '\0') {
    cVar1 = *(char *)(iVar2 + 0x29);
  }
  else {
    cVar1 = *(char *)(iVar2 + 0x28);
  }
  iVar5 = (int)cVar1;
  *(int *)(param_1 + 0x1c) = iVar5;
  if ((iVar5 < 0) || (0x7e < iVar5)) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  iVar6 = (int3)(cVar1 >> 7);
  FUN_006092d2(param_1 + 0x20,CONCAT31(iVar6,*(undefined1 *)(iVar2 + 0x2b)),
               CONCAT31(iVar6,*(undefined1 *)(iVar2 + 0x2a)),
               CONCAT31(iVar6,*(undefined1 *)(iVar2 + 0x2e)));
  FUN_006092d2(param_1 + 0x24,*(undefined1 *)(iVar2 + 0x2d),*(undefined1 *)(iVar2 + 0x2c),
               *(undefined1 *)(iVar2 + 0x2f));
  return;
}

