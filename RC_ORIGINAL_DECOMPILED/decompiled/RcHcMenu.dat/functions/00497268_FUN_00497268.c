/*
 * FUN_00497268 at 00497268
 * bool __register FUN_00497268(int * param_1, uint param_2)
 * Address ranges: 00497268-004972b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00497268(int *param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  int local_14;
  bool local_d;
  
  local_d = false;
  local_14 = 0;
  while( true ) {
    if (local_d != false) {
      return local_d;
    }
    iVar2 = FUN_0045da14((int)param_1);
    if (iVar2 <= local_14) break;
    sVar1 = FUN_0045db38(param_1,local_14);
    local_d = (int)sVar1 == param_2;
    bVar3 = SCARRY4(local_14,1);
    local_14 = local_14 + 1;
    if (bVar3) {
      thunk_FUN_00402874((int)sVar1);
    }
  }
  return false;
}

