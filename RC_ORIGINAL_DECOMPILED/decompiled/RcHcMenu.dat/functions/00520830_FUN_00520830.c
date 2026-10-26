/*
 * FUN_00520830 at 00520830
 * undefined __register FUN_00520830(int * param_1)
 * Address ranges: 00520830-0052086b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00520830(int *param_1)

{
  int iVar1;
  
  FUN_0045b8fc((undefined4 *)param_1[0x9e]);
  FUN_0045b8fc((undefined4 *)param_1[0x9d]);
  iVar1 = FUN_0051e1b8(param_1);
  *(undefined4 *)(*(int *)(iVar1 + 0x274) + 0x214) = 0;
  return;
}

