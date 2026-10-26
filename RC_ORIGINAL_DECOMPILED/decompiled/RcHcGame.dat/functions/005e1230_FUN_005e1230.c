/*
 * FUN_005e1230 at 005e1230
 * undefined FUN_005e1230(void)
 * Address ranges: 005e1230-005e12fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005e1230(byte *param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)param_1[2];
  uVar1 = (uint)param_1[1];
  uVar2 = (uint)*param_1;
  *param_2 = (int)(uVar1 * 0x2591 + uVar2 * 0x1322 + 0x2000 + uVar3 * 0x74b) >> 0xe;
  *param_3 = ((int)((uVar3 + 1) * 0x2000 + uVar1 * -0x1533 + uVar2 * -0xacc) >> 0xe) + 0x7f;
  *param_4 = ((int)(uVar1 * 0x1acb + uVar2 * -0x2000 + 0x2000 + uVar3 * 0x534) >> 0xe) + 0x7f;
  return;
}

