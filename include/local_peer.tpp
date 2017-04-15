///////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                               //
// Copyright 2017 Lucas Lazare.                                                                  //
// This file is part of Breep project which is released under the                                //
// European Union Public License v1.1. If a copy of the EUPL was                                 //
// not distributed with this software, you can obtain one at :                                   //
// https://joinup.ec.europa.eu/community/eupl/og_page/european-union-public-licence-eupl-v11     //
//                                                                                               //
///////////////////////////////////////////////////////////////////////////////////////////////////


template <typename T>
inline peer<T>& local_peer<T>::path_to(const peer<T>& p) {
	return m_path_to_passing_by.at(p.id());
}

template <typename T>
inline const peer<T>& local_peer<T>::path_to(const peer<T>& p) const {
	return m_path_to_passing_by.at(p.id());
}

template <typename T>
inline std::unordered_map<boost::uuids::uuid, breep::peer<T>, boost::hash<boost::uuids::uuid>>& local_peer<T>::path_to_passing_by() noexcept {
	return m_path_to_passing_by;
}

template <typename T>
inline const std::unordered_map<boost::uuids::uuid, peer<T>, boost::hash<boost::uuids::uuid>>& local_peer<T>::path_to_passing_by() const noexcept {
	return m_path_to_passing_by;
}

template <typename T>
inline std::unordered_map<boost::uuids::uuid,peer<T>, boost::hash<boost::uuids::uuid>>& local_peer<T>::bridging_from_to() noexcept {
	return m_bridging_from_to;
};

template <typename T>
const std::unordered_map<boost::uuids::uuid,peer<T>, boost::hash<boost::uuids::uuid>>& local_peer<T>::bridging_from_to() const noexcept {
	return m_bridging_from_to;
};