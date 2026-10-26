/*
 * FUN_004ed3c4 at 004ed3c4
 * undefined __register FUN_004ed3c4(undefined4 param_1, int * param_2)
 * Address ranges: 004ed3c4-004ed46b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ed3c4(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 *puStack_188;
  undefined1 *puStack_184;
  undefined1 *puStack_180;
  int local_17c;
  char local_177 [357];
  short local_12;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_180 = &stack0xfffffffc;
  local_17c = 0;
  puStack_184 = &LAB_004ed46c;
  puStack_188 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_188;
  local_c = param_2;
  local_8 = param_1;
  (**(code **)(*param_2 + 0x40))();
  uVar1 = thunk_FUN_00479b23(&local_10);
  FUN_0047fe48(uVar1);
  do {
    uVar5 = 0;
    pcVar4 = local_177;
    uVar3 = 0;
    uVar2 = local_10;
    local_12 = thunk_FUN_00479c9a(local_10);
    if (local_12 != 0x2202) {
      FUN_0040a34c(local_177,&local_17c);
      (**(code **)(*local_c + 0x34))(local_c,local_17c,*local_c,uVar2,uVar3,pcVar4,uVar5);
    }
  } while (local_12 == 0);
  puVar6 = &local_10;
  uVar1 = thunk_FUN_00479cb2(puVar6);
  FUN_0047fe48(uVar1);
  *in_FS_OFFSET = (int)puVar6;
  puStack_188 = &LAB_004ed473;
  FUN_00403db0(&local_17c);
  return;
}

