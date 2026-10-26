/*
 * FUN_00487034 at 00487034
 * undefined __register FUN_00487034(void)
 * Address ranges: 00487034-004870d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00487034(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint extraout_EDX;
  int iVar4;
  int iVar5;
  int in_stack_00000004;
  undefined4 local_8;
  
  iVar5 = 0;
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x20c);
  bVar2 = FUN_004731cc(iVar1);
  if ((!bVar2) && (iVar4 = *(int *)(iVar1 + 0x58), -1 < iVar4 + -1)) {
    local_8 = 0;
    do {
      iVar3 = FUN_004730d8(iVar1);
      iVar5 = iVar5 + (uint)*(byte *)(iVar3 + (uint)*(ushort *)(iVar1 + 0x1ea) + local_8);
      local_8 = local_8 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x204);
  if ((iVar1 == 0) || (iVar1 != iVar5)) {
    FUN_00473334(*(int **)(in_stack_00000004 + -4));
    *(int *)(*(int *)(in_stack_00000004 + -4) + 0x204) = iVar5;
  }
  else {
    FUN_00473130(*(int **)(in_stack_00000004 + -4));
    (**(code **)(**(int **)(in_stack_00000004 + -4) + 0x244))
              (*(int **)(in_stack_00000004 + -4),extraout_EDX & 0xffffff00);
  }
  return;
}

