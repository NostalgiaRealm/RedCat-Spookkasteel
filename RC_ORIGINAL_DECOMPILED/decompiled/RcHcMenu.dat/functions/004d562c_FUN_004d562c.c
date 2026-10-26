/*
 * FUN_004d562c at 004d562c
 * int __register FUN_004d562c(int param_1, int param_2)
 * Address ranges: 004d562c-004d56a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004d562c(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int extraout_EDX;
  char *local_1c;
  char *local_18;
  char *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_1c = "UPDATE ";
  local_18 = "INSERT ";
  local_14 = "DELETE ";
  local_c = param_2;
  local_8 = param_1;
  local_10 = FUN_00458a14((int)&local_1c,2,param_1,param_2);
  if (1 < local_10) {
    uVar2 = local_10 - 1;
    if (SBORROW4(local_10,1)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    uVar2 = uVar2 - 1;
    if (*(uint *)(local_8 + -4) <= uVar2) {
      uVar2 = thunk_FUN_00402874(uVar2);
      local_8 = extraout_EDX;
    }
    cVar1 = *(char *)(local_8 + uVar2);
    if (((cVar1 != '\n') && (cVar1 != '\r')) && (cVar1 != ' ')) {
      local_10 = 0;
    }
  }
  return local_10;
}

