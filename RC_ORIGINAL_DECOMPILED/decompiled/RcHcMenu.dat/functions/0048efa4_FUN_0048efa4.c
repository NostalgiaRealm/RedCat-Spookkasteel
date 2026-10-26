/*
 * FUN_0048efa4 at 0048efa4
 * char __register FUN_0048efa4(int * param_1, int * param_2)
 * Address ranges: 0048efa4-0048f028
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_0048efa4(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined3 extraout_var;
  bool bVar3;
  byte local_48 [28];
  byte local_2c [28];
  short local_10;
  char local_d;
  int *local_c;
  int *local_8;
  
  local_c = param_2;
  local_8 = param_1;
  iVar1 = FUN_0048ec24((int)param_2);
  iVar2 = FUN_0048ec24((int)local_8);
  local_d = iVar1 == iVar2;
  local_10 = 0;
  while( true ) {
    if (local_d == '\0') {
      return '\0';
    }
    iVar1 = FUN_0048ec24((int)local_8);
    if (iVar1 <= local_10) break;
    FUN_0048f02c(local_c,(int)local_10,(undefined4 *)local_2c);
    FUN_0048f02c(local_8,(int)local_10,(undefined4 *)local_48);
    local_d = FUN_0048d3ac(local_48,local_2c);
    bVar3 = SCARRY2(local_10,1);
    local_10 = local_10 + 1;
    if (bVar3) {
      thunk_FUN_00402874(CONCAT31(extraout_var,local_d));
    }
  }
  return local_d;
}

