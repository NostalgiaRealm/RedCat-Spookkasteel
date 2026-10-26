/*
 * FUN_004952a4 at 004952a4
 * char __register FUN_004952a4(int * param_1, byte * param_2)
 * Address ranges: 004952a4-0049530a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_004952a4(int *param_1,byte *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_14;
  char local_d;
  
  local_d = '\0';
  iVar1 = FUN_00494c5c(param_1,param_2);
  local_14 = FUN_00495ee0(iVar1);
  while( true ) {
    if (local_d != '\0') {
      return local_d;
    }
    iVar1 = FUN_00493c6c(local_14);
    if (iVar1 == local_14) break;
    piVar2 = FUN_0049530c(local_14);
    uVar3 = FUN_0040320c(piVar2,(int)&PTR_FUN_0048ce0c);
    if ((char)uVar3 == '\0') {
      local_14 = FUN_00493c6c(local_14);
    }
    else {
      local_d = '\x01';
    }
  }
  return '\0';
}

