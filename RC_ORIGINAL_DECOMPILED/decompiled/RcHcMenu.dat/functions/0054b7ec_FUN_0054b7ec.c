/*
 * FUN_0054b7ec at 0054b7ec
 * int * __register FUN_0054b7ec(void)
 * Address ranges: 0054b7ec-0054b841
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0054b7ec(void)

{
  undefined **local_10;
  undefined **local_c;
  
  if (DAT_00571f70 == (int *)0x0) {
    DAT_00571f70 = FUN_0048e984((int *)&DAT_0048e2a4,'\x01',(undefined4 *)"AgentDBModel");
    local_10 = &PTR_FUN_004d7800;
    local_c = &PTR_FUN_004d73a8;
    FUN_0048fe8c(DAT_00571f70,&local_10,1);
  }
  return DAT_00571f70;
}

