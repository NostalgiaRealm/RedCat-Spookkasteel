/*
 * FUN_00495f04 at 00495f04
 * int __register FUN_00495f04(int * param_1)
 * Address ranges: 00495f04-00495f29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00495f04(int *param_1)

{
  short sVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_00495ec0((int)param_1);
  sVar1 = FUN_00495064(piVar2,param_1);
  return (int)sVar1;
}

