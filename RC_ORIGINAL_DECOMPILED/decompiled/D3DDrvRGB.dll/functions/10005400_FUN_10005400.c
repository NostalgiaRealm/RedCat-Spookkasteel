/*
 * FUN_10005400 at 10005400
 * undefined4 * __cdecl FUN_10005400(int param_1, int param_2, int param_3, undefined4 param_4, undefined4 param_5, undefined4 * param_6)
 * Address ranges: 10005400-10005480
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __cdecl
FUN_10005400(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x110);
  do {
    if (puVar3[5] == 0) break;
    iVar1 = iVar1 + 1;
    puVar3 = puVar3 + 0x29;
  } while (iVar1 < 0x80);
  if (iVar1 == 0x80) {
    return (undefined4 *)0x0;
  }
  puVar3[3] = param_4;
  puVar3[4] = param_5;
  puVar3[1] = param_2;
  puVar3[2] = param_3;
  puVar4 = puVar3 + 6;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *param_6;
    param_6 = param_6 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3[0x27] = puVar3;
  puVar3[0x28] = param_1;
  uVar2 = FUN_10005bc0(param_2,param_3);
  *puVar3 = uVar2;
  puVar3[5] = puVar3[5] + 1;
  return puVar3;
}

