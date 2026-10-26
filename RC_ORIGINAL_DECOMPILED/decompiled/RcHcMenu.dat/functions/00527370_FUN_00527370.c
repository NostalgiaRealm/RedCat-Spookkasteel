/*
 * FUN_00527370 at 00527370
 * byte __register FUN_00527370(undefined4 * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 00527370-005274db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_00527370(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  byte local_60 [28];
  byte local_44 [28];
  byte local_28 [28];
  int local_c;
  byte local_6;
  
  pbVar4 = local_28;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pbVar4 = *param_1;
    param_1 = param_1 + 1;
    pbVar4 = pbVar4 + 4;
  }
  local_6 = 1;
  pbVar4 = local_28;
  pbVar5 = local_44;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pbVar5 = *(undefined4 *)pbVar4;
    pbVar4 = pbVar4 + 4;
    pbVar5 = pbVar5 + 4;
  }
  FUN_0048dea8(local_44);
  local_c = 0;
  while( true ) {
    iVar3 = FUN_00527214(*(int **)(param_4 + -4));
    iVar3 = FUN_00549b48(*(int *)(iVar3 + 0x290));
    iVar3 = FUN_0048ec24(*(int *)(iVar3 + 0x10));
    if ((local_c < iVar3 & local_6) == 0) break;
    iVar3 = FUN_00527214(*(int **)(param_4 + -4));
    iVar3 = FUN_00549b48(*(int *)(iVar3 + 0x290));
    FUN_0048f02c(*(int **)(iVar3 + 0x10),local_c,(undefined4 *)local_60);
    cVar1 = FUN_0048d3ac(local_60,local_28);
    uVar2 = CONCAT31(extraout_var,cVar1);
    if (cVar1 == '\0') {
      FUN_0048dea8(local_60);
      if (local_6 == 0) {
LAB_005273f4:
        uVar2 = 0;
      }
      else {
        cVar1 = FUN_0048d3ac(local_44,local_60);
        if (cVar1 != '\0') goto LAB_005273f4;
        uVar2 = CONCAT31(extraout_var_00,1);
      }
      local_6 = (byte)uVar2;
    }
    bVar6 = SCARRY4(local_c,1);
    local_c = local_c + 1;
    if (bVar6) {
      thunk_FUN_00402874(uVar2);
    }
  }
  local_c = 0;
  do {
    iVar3 = FUN_00527214(*(int **)(param_4 + -4));
    iVar3 = FUN_00549b48(*(int *)(iVar3 + 0x290));
    iVar3 = FUN_0048ec24(*(int *)(iVar3 + 0x18));
    if ((local_c < iVar3 & local_6) == 0) {
      return local_6;
    }
    iVar3 = FUN_00527214(*(int **)(param_4 + -4));
    iVar3 = FUN_00549b48(*(int *)(iVar3 + 0x290));
    FUN_0048f02c(*(int **)(iVar3 + 0x18),local_c,(undefined4 *)local_60);
    cVar1 = FUN_0048d3ac(local_60,local_28);
    uVar2 = CONCAT31(extraout_var_01,cVar1);
    if (cVar1 == '\0') {
      FUN_0048dea8(local_60);
      if (local_6 == 0) {
LAB_0052748c:
        uVar2 = 0;
      }
      else {
        cVar1 = FUN_0048d3ac(local_44,local_60);
        if (cVar1 != '\0') goto LAB_0052748c;
        uVar2 = CONCAT31(extraout_var_02,1);
      }
      local_6 = (byte)uVar2;
    }
    bVar6 = SCARRY4(local_c,1);
    local_c = local_c + 1;
    if (bVar6) {
      thunk_FUN_00402874(uVar2);
    }
  } while( true );
}

