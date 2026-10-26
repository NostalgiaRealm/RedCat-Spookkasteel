/*
 * FUN_004043f0 at 004043f0
 * undefined4 * __register FUN_004043f0(undefined * param_1, int * param_2)
 * Address ranges: 004043f0-00404459
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_004043f0(undefined *param_1,int *param_2)

{
  undefined4 *local_10c;
  byte local_108 [252];
  undefined4 uStack_c;
  
  uStack_c = 0x4043fd;
  FUN_00403db0(param_2);
  local_10c = (undefined4 *)0x404411;
  FUN_00406f48(param_1,local_108,0xff);
  local_10c = (undefined4 *)0x40441a;
  local_10c = (undefined4 *)FUN_00403fd4(param_2,local_108);
  while (local_108[0] == 0xff) {
    local_10c = (undefined4 *)0x40442e;
    FUN_00406f48(param_1,local_108,0xff);
    local_10c = (undefined4 *)0x0;
    FUN_00403fd4((int *)&local_10c,local_108);
    FUN_00404038(param_2,local_10c);
    FUN_00403db0((int *)&local_10c);
  }
  return local_10c;
}

