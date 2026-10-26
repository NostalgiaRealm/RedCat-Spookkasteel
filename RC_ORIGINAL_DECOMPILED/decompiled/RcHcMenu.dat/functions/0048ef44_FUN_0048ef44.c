/*
 * FUN_0048ef44 at 0048ef44
 * char __register FUN_0048ef44(int * param_1, byte * param_2)
 * Address ranges: 0048ef44-0048efa1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_0048ef44(int *param_1,byte *param_2)

{
  undefined3 extraout_var;
  int iVar1;
  bool bVar2;
  byte local_2c [28];
  short local_10;
  char local_d;
  byte *local_c;
  int *local_8;
  
  local_d = '\0';
  local_10 = 0;
  local_c = param_2;
  local_8 = param_1;
  while( true ) {
    if (local_d != '\0') {
      return local_d;
    }
    iVar1 = FUN_0048ec24((int)local_8);
    if (iVar1 <= local_10) break;
    FUN_0048f02c(local_8,(int)local_10,(undefined4 *)local_2c);
    local_d = FUN_0048d3ac(local_c,local_2c);
    bVar2 = SCARRY2(local_10,1);
    local_10 = local_10 + 1;
    if (bVar2) {
      thunk_FUN_00402874(CONCAT31(extraout_var,local_d));
    }
  }
  return local_d;
}

