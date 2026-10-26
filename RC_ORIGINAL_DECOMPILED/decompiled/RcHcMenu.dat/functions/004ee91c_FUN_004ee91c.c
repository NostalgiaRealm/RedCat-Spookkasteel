/*
 * FUN_004ee91c at 004ee91c
 * undefined __register FUN_004ee91c(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 004ee91c-004eea8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ee91c(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  byte local_44 [28];
  int local_28;
  undefined4 local_24;
  int *local_20;
  int local_1c;
  uint local_18;
  bool local_12;
  char local_11;
  int local_10;
  int local_c;
  int local_8;
  
  local_11 = *(int *)(*(int *)(param_4 + -4) + 0x20) == param_1;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004b4e04(param_2,&stack0xffffffb4,0);
  if (-1 < local_10) {
    local_28 = local_10 + 1;
    local_18 = 0;
    do {
      local_12 = (*(byte *)(*(int *)(*(int *)(param_4 + -4) + 0x1c) + 8) & 4) != 0;
      if (local_11 != '\0') {
        local_12 = !local_12;
      }
      FUN_0048f02c(*(int **)(*(int *)(*(int *)(param_4 + -4) + 0x1c) + 0x18),local_18,
                   (undefined4 *)local_44);
      FUN_00494e38(*(int **)(param_4 + -8),local_44,'\x01',&local_20,&local_24);
      if (local_18 != 0) {
        FUN_004b4e04(local_c,&stack0xffffffb4,0);
      }
      if ((int)local_18 < local_10) {
        local_1c = *(int *)PTR_DAT_0057260c;
      }
      else {
        if (local_11 == '\0') {
          iVar1 = FUN_0048ec24(*(int *)(*(int *)(*(int *)(param_4 + -4) + 0x1c) + 0x18));
          uVar2 = iVar1 - 1;
          if (SBORROW4(iVar1,1)) {
            uVar2 = thunk_FUN_00402874(uVar2);
          }
          if (uVar2 == local_18) {
            if (local_12 == false) {
              local_1c = *(int *)PTR_DAT_005720f0;
            }
            else {
              local_1c = *(int *)PTR_DAT_005721bc;
            }
            goto LAB_004eea51;
          }
        }
        if (local_12 == false) {
          local_1c = *(int *)PTR_DAT_00572070;
        }
        else {
          local_1c = *(int *)PTR_DAT_00572148;
        }
      }
LAB_004eea51:
      FUN_004ee70c(local_c,local_1c,local_20,param_4);
      local_18 = local_18 + 1;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  FUN_004b4e04(local_c,&stack0xffffffb4,0);
  return;
}

