/*
 * FUN_005e80b0 at 005e80b0
 * undefined FUN_005e80b0(void)
 * Address ranges: 005e80b0-005e8198
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x651568 slot 2 for .?AV?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x651568 slot 2 for
   .?AV?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@. Original bytes
   unchanged; names and types still inferred. */

void FUN_005e80b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined1 local_54;
  char local_53 [7];
  undefined1 local_4c [76];
  
  iVar6 = *(int *)(param_4 + 0x10);
  if ((iVar6 < 1) && ((*(uint *)(param_4 + 0xc) & 0x2000) == 0)) {
    iVar6 = 6;
  }
  iVar7 = 0x24;
  if (iVar6 < 0x25) {
    iVar7 = iVar6;
  }
  uVar1 = *(uint *)(param_4 + 0xc);
  local_54 = 0x25;
  pcVar2 = local_53;
  if ((uVar1 & 0x20) != 0) {
    local_53[0] = '+';
    pcVar2 = local_53 + 1;
  }
  if ((uVar1 & 0x10) != 0) {
    *pcVar2 = '#';
    pcVar2 = pcVar2 + 1;
  }
  *pcVar2 = '.';
  pcVar2[1] = '*';
  pcVar2[2] = 'L';
  if ((uVar1 & 0x3000) == 0x2000) {
    cVar5 = 'f';
  }
  else {
    cVar5 = (((uVar1 & 0x3000) != 0x1000) - 1U & 0xfe) + 0x67;
  }
  pcVar2[3] = cVar5;
  pcVar2[4] = '\0';
  uVar3 = FUN_0060d588(local_4c,&local_54,iVar7,param_6,param_7);
  puVar4 = (undefined4 *)
           FUN_005e8360(&param_6,param_2,param_3,param_4,param_5,local_4c,iVar6 - iVar7,uVar3);
  *param_1 = *puVar4;
  param_1[1] = puVar4[1];
  return;
}

