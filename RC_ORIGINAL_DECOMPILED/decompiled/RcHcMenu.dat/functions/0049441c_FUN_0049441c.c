/*
 * FUN_0049441c at 0049441c
 * bool __register FUN_0049441c(int * param_1, int * param_2, int * param_3)
 * Address ranges: 0049441c-004944ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0049441c(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == (int *)0x0) {
    FUN_00403d94(" Parameter cannot be nil");
  }
  if (param_3 == (int *)0x0) {
    FUN_00403d94(" Parameter cannot be nil");
  }
  iVar1 = FUN_00402fdc(param_2);
  iVar2 = FUN_00402fdc(param_1);
  if (iVar1 != iVar2) {
    FUN_00403d94("Cannot assign, different appObj-types");
  }
  uVar3 = FUN_004946dc(param_1,param_2,param_3,0x10);
  return uVar3 == 0;
}

