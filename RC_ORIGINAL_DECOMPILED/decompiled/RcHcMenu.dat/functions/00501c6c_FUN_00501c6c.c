/*
 * FUN_00501c6c at 00501c6c
 * undefined __register FUN_00501c6c(int * param_1, undefined4 param_2)
 * Address ranges: 00501c6c-00501cfe;00501d06-00501d09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00501c6c(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x501c89;
  local_c = param_2;
  local_8 = param_1;
  cVar1 = (**(code **)(*(int *)param_1[0x8d] + 8))((int *)param_1[0x8d],param_2);
  if (cVar1 == '\0') {
    puStack_10 = (undefined1 *)0x501c9e;
    (**(code **)(*(int *)local_8[0x8d] + 4))((int *)local_8[0x8d],local_c);
    *(byte *)(local_8 + 0x97) = *(byte *)(local_8 + 0x97) | 0x20;
    puStack_10 = (undefined1 *)0x501cb0;
    uVar2 = FUN_005013c0((int)local_8);
    if ((char)uVar2 != '\0') {
      puStack_14 = &LAB_00501cff;
      uStack_18 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_18;
      puStack_10 = &stack0xfffffffc;
      FUN_005013f8(local_8,'\x04');
      FUN_00501610(local_8);
      FUN_005015e0(local_8);
      *in_FS_OFFSET = uStack_18;
      puStack_10 = (undefined1 *)0x501d06;
      puStack_14 = (undefined1 *)0x501cf3;
      FUN_005013f8(local_8,'\0');
      puStack_14 = (undefined1 *)0x501cfe;
      (**(code **)(*local_8 + 0xe8))();
      return;
    }
  }
  return;
}

