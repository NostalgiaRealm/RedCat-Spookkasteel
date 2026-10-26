/*
 * FUN_004d6960 at 004d6960
 * undefined FUN_004d6960(void)
 * Address ranges: 004d6960-004d69a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __fastcall FUN_004d6960(int param_1)

{
  int iVar1;
  float10 fVar2;
  float fVar3;
  undefined1 local_c [12];
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xf8) + 0x28))(local_c);
  fVar3 = *(float *)(iVar1 + 4) + 1.5707964;
  fVar2 = (float10)FUN_0060b68f((double)((fVar3 + 3.1415927) / 6.2831855));
  return (float10)fVar3 - fVar2 * (float10)6.2831855;
}

