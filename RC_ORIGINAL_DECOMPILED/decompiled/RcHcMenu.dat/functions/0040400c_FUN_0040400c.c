/*
 * FUN_0040400c at 0040400c
 * undefined __register FUN_0040400c(undefined1 * param_1, undefined4 * param_2, uint param_3)
 * Address ranges: 0040400c-0040402d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040400c(undefined1 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_2 != (undefined4 *)0x0) && (uVar1 = param_2[-1], uVar1 != 0)) {
    if ((int)uVar1 <= (int)param_3) {
      param_3 = uVar1;
    }
    *param_1 = (char)param_3;
    FUN_00402944(param_2,(undefined4 *)(param_1 + 1),param_3);
    return;
  }
  *param_1 = 0;
  return;
}

