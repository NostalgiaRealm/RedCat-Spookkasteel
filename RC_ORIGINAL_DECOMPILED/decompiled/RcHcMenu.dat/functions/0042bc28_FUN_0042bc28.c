/*
 * FUN_0042bc28 at 0042bc28
 * undefined __register FUN_0042bc28(int * param_1, int param_2)
 * Address ranges: 0042bc28-0042bc78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042bc28(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  uVar2 = FUN_0040320c(piVar1,(int)&PTR_FUN_00427834);
  if ((char)uVar2 == '\0') {
    *(char *)((int)param_1 + 0x1fa) = (char)param_1[0x7e];
  }
  else {
    *(bool *)((int)param_1 + 0x1fa) = param_1 == piVar1;
  }
  (**(code **)(*param_1 + 0xbc))(param_1,*(undefined1 *)((int)param_1 + 0x1fa));
  FUN_00437eb8((int)param_1,param_2);
  return;
}

