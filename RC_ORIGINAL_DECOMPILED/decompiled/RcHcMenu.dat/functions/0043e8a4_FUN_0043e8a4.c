/*
 * FUN_0043e8a4 at 0043e8a4
 * undefined __register FUN_0043e8a4(int * param_1, undefined4 param_2, int * param_3)
 * Address ranges: 0043e8a4-0043e8ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043e8a4(int *param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  
  if (param_3 != (int *)0x0) {
    bVar1 = FUN_0043e3b4((int)param_1);
    if (bVar1) {
      (**(code **)(*param_3 + 0x34))(param_3,param_1[9]);
      (**(code **)(*param_3 + 0x40))(param_3,param_1[10]);
      uVar4 = 0;
      uVar3 = 1;
      iVar2 = FUN_00421490(param_3);
      FUN_0043ee08(param_1,iVar2,0,uVar3,param_2,uVar4);
    }
  }
  return;
}

