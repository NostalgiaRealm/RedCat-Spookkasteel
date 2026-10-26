/*
 * FUN_00486e28 at 00486e28
 * undefined4 __register FUN_00486e28(int param_1)
 * Address ranges: 00486e28-00486eb7;00486f49-00486f79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00486e28(int param_1)

{
  ushort *puVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  byte local_9;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 0x1b3) = 1;
  local_9 = 0;
  puVar1 = *(ushort **)(param_1 + 0x1b8);
  cVar4 = (char)*(undefined4 *)(puVar1 + 1) + -1;
  puStack_20 = &LAB_00486eb8;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  if (*(short *)(param_1 + 0x222) == 0) {
    piVar2 = *(int **)(param_1 + 0x210);
    if (piVar2 == (int *)0x0) {
      FUN_0047fe30((uint)*puVar1);
    }
    else {
      puStack_1c = &stack0xfffffffc;
      (**(code **)(*piVar2 + 0x38))(piVar2,CONCAT31((int3)((uint)puVar1 >> 8),cVar4));
      local_9 = 4;
    }
  }
  else {
    puStack_1c = &stack0xfffffffc;
    (**(code **)(param_1 + 0x220))(*(undefined4 *)(param_1 + 0x224),param_1,cVar4,&local_9);
  }
  *in_FS_OFFSET = uStack_24;
  uVar3 = *(undefined4 *)(&DAT_00571550 + (uint)local_9 * 4);
  if (local_9 == 1) {
    **(undefined2 **)(local_8 + 0x1b8) = 0x3306;
  }
  *(undefined1 *)(local_8 + 0x1b3) = 0;
  return uVar3;
}

