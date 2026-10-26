/*
 * FUN_00455b68 at 00455b68
 * undefined __register FUN_00455b68(int * param_1, int param_2)
 * Address ranges: 00455b68-00455c69;00455c89-00455c98
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00455b68(int *param_1,int param_2)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if ((char)param_1[0x13] == '\0') {
    puStack_24 = (undefined1 *)0x455c94;
    FUN_00437470(param_1,param_2);
  }
  else {
    *(undefined1 *)(param_1 + 0x7e) = 1;
    puStack_28 = &LAB_00455c82;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    FUN_0043211c(*(int *)(*(int *)(param_2 + 4) + 0x38),&local_1c);
    cVar1 = *(char *)((int)local_8 + 0x4b);
    if (cVar1 == '\x01') {
      if (local_8[0xf] == 0) {
        FUN_00431f98(local_8,local_10 - local_18);
      }
    }
    else if (cVar1 == '\x02') {
      if (local_8[0xf] == 0) {
        (**(code **)(*local_8 + 0x7c))
                  (local_8,local_8[0xc],local_8[0xd] - (local_10 - local_18),local_10 - local_18,
                   local_8[0xe]);
      }
    }
    else if (cVar1 == '\x03') {
      if (local_8[0xe] == 0) {
        FUN_00431f78(local_8,local_14 - local_1c);
      }
    }
    else if ((cVar1 == '\x04') && (local_8[0xe] == 0)) {
      (**(code **)(*local_8 + 0x7c))
                (local_8,local_8[0xc] - (local_14 - local_1c),local_8[0xd],local_8[0xf],
                 local_14 - local_1c);
    }
    FUN_00437470(local_8,local_c);
    FUN_004038cc();
  }
  return;
}

