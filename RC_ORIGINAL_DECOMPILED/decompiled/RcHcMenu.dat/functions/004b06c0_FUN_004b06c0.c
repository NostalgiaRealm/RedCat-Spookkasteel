/*
 * FUN_004b06c0 at 004b06c0
 * undefined2 __register FUN_004b06c0(void)
 * Address ranges: 004b06c0-004b0725
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined2 FUN_004b06c0(void)

{
  char cVar1;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 extraout_AH_01;
  undefined1 extraout_AH_02;
  undefined1 uVar2;
  undefined1 local_5;
  
  local_5 = 1;
  cVar1 = FUN_004b0560(800,600,0x18);
  uVar2 = extraout_AH;
  if (cVar1 == '\0') {
    cVar1 = FUN_004b0560(800,600,0x10);
    uVar2 = extraout_AH_00;
    if (cVar1 == '\0') {
      cVar1 = FUN_004b0560(800,600,0xf);
      uVar2 = extraout_AH_01;
      if (cVar1 == '\0') {
        cVar1 = FUN_004b0560(800,600,0x20);
        uVar2 = extraout_AH_02;
        if (cVar1 == '\0') {
          local_5 = 0;
        }
      }
    }
  }
  return CONCAT11(uVar2,local_5);
}

