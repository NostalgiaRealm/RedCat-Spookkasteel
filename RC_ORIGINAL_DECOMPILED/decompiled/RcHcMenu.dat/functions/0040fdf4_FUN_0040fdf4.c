/*
 * FUN_0040fdf4 at 0040fdf4
 * undefined __register FUN_0040fdf4(int * param_1, undefined4 * param_2)
 * Address ranges: 0040fdf4-0040fe22;0040fe45-0040fe68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040fdf4(int *param_1,undefined4 *param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)param_2[1];
  if (*(char *)((int)param_2 + 7) == -1) {
    (**(code **)(&DAT_0040fe23 +
                (uint)*(byte *)(*(int *)*param_2 + 2 + (uint)*(byte *)(*(int *)*param_2 + 1)) * 4))
              ((int)param_1 + ((uint)pcVar1 & 0xffffff));
    return;
  }
  if (*(char *)((int)param_2 + 7) == -2) {
    (**(code **)((int)(short)pcVar1 + *param_1))(param_1,param_2[4]);
  }
  else {
    (*pcVar1)(param_1,param_2[4]);
  }
  if (*(char *)(*(int *)*param_2 + 2 + (uint)*(byte *)(*(int *)*param_2 + 1)) != '\x04') {
    return;
  }
  return;
}

