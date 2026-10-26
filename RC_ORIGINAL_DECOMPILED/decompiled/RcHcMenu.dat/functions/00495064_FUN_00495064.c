/*
 * FUN_00495064 at 00495064
 * undefined __register FUN_00495064(int * param_1, int * param_2)
 * Address ranges: 00495064-00495131
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00495064(int *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int *in_FS_OFFSET;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  short local_e;
  int *local_c;
  int *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_28 = &LAB_00495132;
  iStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_2c;
  local_c = param_2;
  local_8 = param_1;
  bVar1 = FUN_00493ce4(param_1,&local_14);
  if (bVar1) {
    do {
      piVar3 = (int *)FUN_00494b98(local_8,local_14);
      if (piVar3 == local_c) {
        uVar4 = local_14 + 0x8000;
        if (0xffff < uVar4) {
          uVar4 = thunk_FUN_00402874(uVar4);
        }
        local_e = (short)uVar4 + -0x8000;
        goto LAB_00495117;
      }
      cVar2 = FUN_00493d24(local_8,&local_14);
    } while (cVar2 != '\0');
  }
  (**(code **)(*local_c + 8))(local_c,&local_1c,*local_c,"TAppObj.FindPropNr: Can\'t find ");
  (**(code **)(*local_8 + 8))(local_8,&local_20,*local_8,&DAT_00495174,local_1c);
  iStack_2c = local_20;
  FUN_004040f0(&local_18,4);
  FUN_00459bd4(local_18);
  local_e = -1;
LAB_00495117:
  *in_FS_OFFSET = iStack_2c;
  puStack_24 = &LAB_00495139;
  puStack_28 = (undefined1 *)0x495131;
  FUN_00403dd4(&local_20,3);
  return;
}

