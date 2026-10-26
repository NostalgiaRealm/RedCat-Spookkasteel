/*
 * FUN_0054cb9c at 0054cb9c
 * undefined __register FUN_0054cb9c(int * param_1, char param_2)
 * Address ranges: 0054cb9c-0054cbd2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054cb9c(int *param_1,char param_2)

{
  FUN_004e1c68(param_1[0xc6]);
  FUN_0054ccdc(param_1,param_2);
  (**(code **)(*(int *)param_1[0xc6] + 0x74))();
  return;
}

