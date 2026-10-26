/*
 * FUN_00501a20 at 00501a20
 * undefined __register FUN_00501a20(int * param_1, int param_2)
 * Address ranges: 00501a20-00501ae6;00501bd3-00501be8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00501a20(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int *local_8;
  
  puStack_1c = (undefined1 *)0x501a35;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4(param_2);
  puStack_20 = &LAB_00501be9;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x501a4b;
  puStack_1c = &stack0xfffffffc;
  uVar1 = FUN_005013c0((int)local_8);
  if ((char)uVar1 != '\0') {
    puStack_28 = (undefined1 *)0x501a5e;
    puVar2 = (undefined4 *)(**(code **)(*local_8 + 0x114))();
    puStack_28 = (undefined1 *)0x501a65;
    uVar1 = (*(code *)*puVar2)(puVar2,1,local_8);
    puStack_2c = &LAB_00501bcc;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_34 = (undefined1 *)0x501a80;
    puStack_28 = &stack0xfffffffc;
    FUN_005013f8(local_8,'\a');
    puStack_38 = &LAB_00501ae7;
    uStack_3c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_3c;
    if ((*(byte *)(local_8 + 0x97) & 0x10) == 0) {
      puStack_34 = &stack0xfffffffc;
      (**(code **)(*local_8 + 0x11c))(local_8,local_c,uVar1);
    }
    else {
      puStack_34 = &stack0xfffffffc;
      (**(code **)(*local_8 + 0x124))(local_8,local_c,uVar1);
      *(byte *)(local_8 + 0x97) = *(byte *)(local_8 + 0x97) & 0xef;
    }
    *in_FS_OFFSET = uStack_3c;
    puStack_34 = &LAB_00501aee;
    puStack_38 = (undefined1 *)0x501ae6;
    FUN_005013f8(local_8,'\0');
    return;
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00501bf0;
  puStack_20 = (undefined1 *)0x501be8;
  FUN_00403db0(&local_c);
  return;
}

