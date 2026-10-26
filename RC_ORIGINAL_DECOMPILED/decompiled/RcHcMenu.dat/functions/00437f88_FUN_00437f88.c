/*
 * FUN_00437f88 at 00437f88
 * undefined __register FUN_00437f88(int * param_1)
 * Address ranges: 00437f88-00437fc1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00437f88(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar3;
  undefined4 uVar4;
  
  FUN_00433fc8(param_1);
  bVar1 = FUN_00438c84((int)param_1);
  uVar3 = extraout_var;
  if (bVar1) {
    uVar4 = 0;
    uVar2 = FUN_0041bb5c(param_1[0x16]);
    FUN_00433700((int)param_1,0x30,uVar2,uVar4);
    uVar3 = extraout_var_00;
  }
  FUN_004357fc((int)param_1,CONCAT22(uVar3,0xb008));
  return;
}

