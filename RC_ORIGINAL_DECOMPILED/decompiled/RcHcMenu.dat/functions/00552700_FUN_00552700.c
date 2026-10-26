/*
 * FUN_00552700 at 00552700
 * undefined __register FUN_00552700(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 00552700-0055282b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00552700(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar4;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 local_3c [4];
  int local_2c [2];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  undefined1 local_a;
  undefined1 local_9;
  int *local_8;
  
  puStack_44 = &stack0xfffffffc;
  local_24 = 0;
  local_a = (undefined1)param_3;
  local_9 = (undefined1)param_2;
  puStack_48 = &LAB_0055282c;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  local_8 = param_1;
  FUN_00433a98((int)param_1,param_2,param_3,param_4,param_5);
  if ((char)local_8[0x7d] == '\0') {
    if (*(short *)((int)local_8 + 0x1fa) != 0) {
      FUN_0041160c(param_5,param_4,local_2c);
      FUN_0043228c(local_8,local_2c,&local_18);
      piVar1 = (int *)FUN_004487c4(local_8);
      local_10 = FUN_00552878(local_8,piVar1,&local_18);
      FUN_00403db0(&local_24);
      local_1c = 100;
      local_20 = 100;
      (*(code *)local_8[0x7e])(local_8[0x7f],local_10,&local_24,&local_20,&local_1c);
      if (local_24 != 0) {
        uVar2 = local_14 + local_20;
        if (SCARRY4(local_14,local_20)) {
          uVar2 = thunk_FUN_00402874(uVar2);
        }
        puVar4 = local_3c;
        iVar3 = local_18 + local_1c;
        if (SCARRY4(local_18,local_1c)) {
          thunk_FUN_00402874((uint)puVar4);
          iVar3 = extraout_ECX;
        }
        FUN_00411624(local_18,local_14,iVar3,puVar4,uVar2);
        FUN_00552938(local_8,local_24,local_3c);
      }
    }
  }
  else {
    FUN_005529e4((int)local_8);
  }
  FUN_0044f5e0(*(int *)PTR_DAT_005725f0,0);
  *in_FS_OFFSET = uStack_4c;
  puStack_44 = &LAB_00552833;
  puStack_48 = (undefined1 *)0x55282b;
  FUN_00403db0(&local_24);
  return;
}

