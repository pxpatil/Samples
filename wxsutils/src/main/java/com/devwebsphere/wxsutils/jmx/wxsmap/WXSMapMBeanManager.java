//
//This sample program is provided AS IS and may be used, executed, copied and
//modified without royalty payment by customer (a) for its own instruction and 
//study, (b) in order to develop applications designed to run with an IBM 
//WebSphere product, either for customer's own internal use or for redistribution 
//by customer, as part of such an application, in customer's own products. "
//
//5724-J34 (C) COPYRIGHT International Business Machines Corp. 2005
//All Rights Reserved * Licensed Materials - Property of IBM
//
package com.devwebsphere.wxsutils.jmx.wxsmap;

import javax.management.InstanceAlreadyExistsException;

import com.devwebsphere.wxsutils.jmx.MBeanGroupManager;

public final class WXSMapMBeanManager extends MBeanGroupManager<WXSMapMBeanImpl> {
	public WXSMapMBeanManager() throws InstanceAlreadyExistsException {
		super(WXSMapMBeanImpl.class, WXSMapMBean.class, "grid", "WXSMap", "MapName");
	}

	final static public String UNKNOWN_MAP = "_UNDEFINED";

	@Override
	public WXSMapMBeanImpl createMBean(String gridName, String mapName) {
		return new WXSMapMBeanImpl(gridName, mapName);
	}

}
