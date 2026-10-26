/*
 * FUN_004045d4 at 004045d4
 * undefined __register FUN_004045d4(int * param_1, undefined4 * param_2)
 * Address ranges: 004045d4-00404632
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004045d4(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar1 = FUN_004045c8((int)param_2);
  if (uVar1 != 0) {
    uVar2 = FUN_004045c8(*param_1);
    puVar3 = (undefined4 *)FUN_004046b8(uVar1 + uVar2);
    if (0 < (int)uVar2) {
      FUN_00402944((undefined4 *)*param_1,puVar3,uVar2 * 2);
    }
    FUN_00402944(param_2,(undefined4 *)((int)puVar3 + uVar2 * 2),uVar1 * 2);
    FUN_00404464(param_1,puVar3);
  }
  return;
}

