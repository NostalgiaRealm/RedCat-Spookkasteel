/*
 * FUN_10001210 at 10001210
 * undefined4 * __cdecl FUN_10001210(int param_1, undefined4 param_2, undefined4 param_3, undefined1 param_4, undefined4 * param_5)
 * Address ranges: 10001210-1000127e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __cdecl
FUN_10001210(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar3 = (undefined4 *)(param_1 + 0x104);
  iVar1 = 0;
  do {
    if (puVar3[0xd] == 0) break;
    iVar1 = iVar1 + 1;
    puVar3 = puVar3 + 0xf;
  } while (iVar1 < 0x80);
  if (iVar1 == 0x80) {
    return (undefined4 *)0x0;
  }
  puVar4 = param_5;
  puVar5 = puVar3;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar3[6] = param_2;
  puVar3[4] = 0;
  puVar3[7] = param_3;
  *(undefined1 *)(puVar3 + 8) = param_4;
  uVar2 = grTexTextureMemRequired(3,param_5);
  puVar3[9] = uVar2;
  puVar3[0xd] = puVar3[0xd] + 1;
  return puVar3;
}

