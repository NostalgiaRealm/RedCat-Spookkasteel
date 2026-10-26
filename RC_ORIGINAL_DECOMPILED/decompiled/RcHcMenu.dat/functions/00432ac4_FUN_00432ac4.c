/*
 * FUN_00432ac4 at 00432ac4
 * undefined1 __register FUN_00432ac4(void)
 * Address ranges: 00432ac4-00432b4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_00432ac4(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  int in_stack_00000004;
  RECT local_28;
  tagRECT local_18;
  undefined1 local_5;
  
  local_5 = 1;
  puVar1 = *(undefined4 **)(*(int *)(*(int *)(in_stack_00000004 + -4) + 0x24) + 0x134);
  iVar2 = FUN_004123e0((int)puVar1,*(int *)(in_stack_00000004 + -4));
  do {
    do {
      if (iVar2 < 1) {
        return 0;
      }
      iVar2 = iVar2 + -1;
      iVar3 = FUN_00412384(puVar1,iVar2);
    } while ((*(char *)(iVar3 + 0x47) == '\0') || ((*(byte *)(iVar3 + 0x40) & 0x40) == 0));
    FUN_0043211c(iVar3,&local_28.left);
    IntersectRect(&local_18,(RECT *)(in_stack_00000004 + -0x14),&local_28);
    BVar4 = EqualRect(&local_18,(RECT *)(in_stack_00000004 + -0x14));
  } while (BVar4 == 0);
  return local_5;
}

