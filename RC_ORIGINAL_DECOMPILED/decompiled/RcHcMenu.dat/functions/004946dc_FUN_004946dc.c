/*
 * FUN_004946dc at 004946dc
 * uint __register FUN_004946dc(int * param_1, int * param_2, int * param_3, undefined1 param_4)
 * Address ranges: 004946dc-00494768
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_004946dc(int *param_1,int *param_2,int *param_3,undefined1 param_4)

{
  int iVar1;
  bool bVar2;
  byte local_44 [28];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  uint local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_14 = 0;
  local_28 = 0;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  while( true ) {
    if (local_14 != 0) {
      return local_14;
    }
    iVar1 = FUN_0048ec24((int)local_10);
    if (iVar1 <= local_28) break;
    FUN_0048f02c(local_10,local_28,(undefined4 *)local_44);
    FUN_00494e38(local_8,local_44,'\x01',&local_18,&local_20);
    FUN_00494e38(local_c,local_44,'\x01',&local_1c,&local_24);
    local_14 = (**(code **)(*local_18 + 0x48))(local_18,local_1c,param_4);
    bVar2 = SCARRY4(local_28,1);
    local_28 = local_28 + 1;
    if (bVar2) {
      thunk_FUN_00402874(local_14);
    }
  }
  return local_14;
}

