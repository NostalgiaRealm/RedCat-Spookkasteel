/*
 * FUN_005e7f10 at 005e7f10
 * undefined FUN_005e7f10(void)
 * Address ranges: 005e7f10-005e7fbc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x651568 slot 4 for .?AV?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x651568 slot 4 for
   .?AV?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@. Original bytes
   unchanged; names and types still inferred. */

void FUN_005e7f10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined1 local_50;
  char local_4f [7];
  undefined1 local_48 [8];
  undefined1 local_40 [64];
  
  local_50 = 0x25;
  pcVar5 = local_4f;
  uVar1 = *(uint *)(param_4 + 0xc);
  if ((uVar1 & 0x20) != 0) {
    local_4f[0] = '+';
    pcVar5 = local_4f + 1;
  }
  if ((uVar1 & 8) != 0) {
    *pcVar5 = '#';
    pcVar5 = pcVar5 + 1;
  }
  *pcVar5 = 'l';
  if ((uVar1 & 0xe00) == 0x400) {
    cVar2 = 'o';
  }
  else if ((uVar1 & 0xe00) == 0x800) {
    cVar2 = (~(byte)uVar1 & 4 | 0xb) << 3;
  }
  else {
    cVar2 = 'u';
  }
  pcVar5[1] = cVar2;
  pcVar5[2] = '\0';
  uVar3 = FUN_0060d588(local_40,&local_50,param_6);
  puVar4 = (undefined4 *)FUN_005e8750(local_48,param_2,param_3,param_4,param_5,local_40,uVar3);
  *param_1 = *puVar4;
  param_1[1] = puVar4[1];
  return;
}

