/*
 * FUN_0049476c at 0049476c
 * int __register FUN_0049476c(int * param_1, int * param_2, int * param_3, undefined1 param_4)
 * Address ranges: 0049476c-00494811
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0049476c(int *param_1,int *param_2,int *param_3,undefined1 param_4)

{
  char cVar1;
  undefined3 extraout_var;
  uint uVar2;
  int iVar3;
  bool bVar4;
  byte local_44 [28];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  int local_14;
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
    iVar3 = FUN_0048ec24((int)local_10);
    if (iVar3 <= local_28) break;
    FUN_0048f02c(local_10,local_28,(undefined4 *)local_44);
    FUN_00494e38(local_8,local_44,'\x01',&local_18,&local_20);
    FUN_00494e38(local_c,local_44,'\x01',&local_1c,&local_24);
    local_14 = (**(code **)(*local_18 + 0x48))(local_18,local_1c,param_4);
    cVar1 = FUN_0048f780(local_10,local_44);
    uVar2 = CONCAT31(extraout_var,cVar1);
    if ((cVar1 != '\0') && (bVar4 = SBORROW4(0,local_14), local_14 = -local_14, bVar4)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    bVar4 = SCARRY4(local_28,1);
    local_28 = local_28 + 1;
    if (bVar4) {
      thunk_FUN_00402874(uVar2);
    }
  }
  return local_14;
}

