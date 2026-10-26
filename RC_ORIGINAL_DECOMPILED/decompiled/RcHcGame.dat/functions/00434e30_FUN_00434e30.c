/*
 * FUN_00434e30 at 00434e30
 * undefined FUN_00434e30(void)
 * Address ranges: 00434e30-00434e75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_00434e30(int param_1)

{
  char cVar1;
  
  FUN_0060a6f2(*(undefined4 *)(param_1 + 0x1f0),0,&CAdamPlayerGameProperties::RTTI_Type_Descriptor,
               &CRcPlayerProperties::RTTI_Type_Descriptor,0);
  cVar1 = FUN_00439f10(4);
  if (cVar1 != '\0') {
    return 0xb;
  }
  cVar1 = FUN_00439f10(2);
  return 9 - (uint)(cVar1 != '\0');
}

