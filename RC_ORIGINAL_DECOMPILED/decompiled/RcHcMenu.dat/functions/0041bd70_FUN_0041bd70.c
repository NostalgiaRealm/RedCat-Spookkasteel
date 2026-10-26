/*
 * FUN_0041bd70 at 0041bd70
 * undefined __register FUN_0041bd70(int * param_1, undefined4 * param_2)
 * Address ranges: 0041bd70-0041bdc9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041bd70(int *param_1,undefined4 *param_2)

{
  byte abStack_134 [11];
  byte local_129 [33];
  byte local_108 [256];
  
  if (param_2 != (undefined4 *)0x0) {
    FUN_0041bae0((int)param_1,(undefined4 *)abStack_134);
    FUN_00402cfc((undefined4 *)local_129,0x20,0);
    FUN_0040400c(local_108,param_2,0xff);
    FUN_00402bd8(local_129,local_108,0x1f);
    FUN_0041baf8(param_1,abStack_134);
  }
  return;
}

